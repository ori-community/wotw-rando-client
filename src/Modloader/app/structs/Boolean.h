#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Boolean_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Boolean_INITIALIZING
#if !defined(IL2CPP_STRUCT_Boolean_DEFINED)
#define IL2CPP_STRUCT_Boolean_DEFINED
struct Boolean {
    bool m_value;
};
#endif
#if !defined(IL2CPP_STRUCT_Boolean_FWDDECL)
#define IL2CPP_STRUCT_Boolean_FWDDECL
#endif
#undef IL2CPP_STRUCT_Boolean_INITIALIZING
#if !defined(IL2CPP_STRUCT_Boolean_DEFINED) && !defined(IL2CPP_STRUCT_Boolean_FWDDECL)
#include <Modloader/app/structs/Boolean.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Boolean.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
