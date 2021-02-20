/*------------------------------
 * Author: derekduke
 * date: 2021/2/19
 * version: first version
 *------------------------------*/

#include <xd_k.h>

void xd_list_init(xd_list_t* l)
{
    l->next = l->prev = l;
}

void xd_list_insert_after(xd_list_t* l , xd_list_t* n)
{
    l->next->prev = n;
}

void xd_list_insert_before(xd_list_t* l , xd_list_t* n)
{
	l->prev->next = n;
	n->prev = l->prev;
	l->prev = n;  
}

void xd_list_remove(xd_list_t* n)
{
    n->next->prev = n->prev;
    n->prev->next = n->next;
    n->next = n->prev = n;
}