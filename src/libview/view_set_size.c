void *view_set_size(void *self, unsigned long width, unsigned long height)
{
	(t_view *)self->width = width;
	(t_view *)self->height = height;	
	return (view);
}
