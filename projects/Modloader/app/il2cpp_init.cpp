#define IL2CPP_API_BINDING(r, n, p) r (*n) p = (r (*) p)(modloader::win::memory::resolve_rva(n##_ptr))
#include "il2cpp_api_registration.h"
#undef IL2CPP_API_BINDING
