#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeMember_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeMember_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeMember_DEFINED)
#include <Modloader/app/structs/TypeMember__Fields.h>
#if defined(IL2CPP_STRUCT_TypeMember__Fields_DEFINED)
#define IL2CPP_STRUCT_TypeMember_DEFINED
struct TypeMember__Class;
struct TypeMember {
    struct TypeMember__Class* klass;
    MonitorData* monitor;
    struct TypeMember__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TypeMember_FWDDECL)
#define IL2CPP_STRUCT_TypeMember_FWDDECL
#include <Modloader/app/structs/TypeMember__Class.h>
#endif
#undef IL2CPP_STRUCT_TypeMember_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeMember_DEFINED) && !defined(IL2CPP_STRUCT_TypeMember_FWDDECL)
#include <Modloader/app/structs/TypeMember.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeMember.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
