#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HServerQuery_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HServerQuery_INITIALIZING
#if !defined(IL2CPP_STRUCT_HServerQuery_DEFINED)
#define IL2CPP_STRUCT_HServerQuery_DEFINED
struct HServerQuery {
    int32_t m_HServerQuery;
};
#endif
#if !defined(IL2CPP_STRUCT_HServerQuery_FWDDECL)
#define IL2CPP_STRUCT_HServerQuery_FWDDECL
#endif
#undef IL2CPP_STRUCT_HServerQuery_INITIALIZING
#if !defined(IL2CPP_STRUCT_HServerQuery_DEFINED) && !defined(IL2CPP_STRUCT_HServerQuery_FWDDECL)
#include <Modloader/app/structs/HServerQuery.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HServerQuery.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
