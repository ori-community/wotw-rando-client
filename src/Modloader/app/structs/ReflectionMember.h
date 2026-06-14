#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReflectionMember_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReflectionMember_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectionMember_DEFINED)
#include <Modloader/app/structs/ReflectionMember__Fields.h>
#if defined(IL2CPP_STRUCT_ReflectionMember__Fields_DEFINED)
#define IL2CPP_STRUCT_ReflectionMember_DEFINED
struct ReflectionMember__Class;
struct ReflectionMember {
    struct ReflectionMember__Class* klass;
    MonitorData* monitor;
    struct ReflectionMember__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReflectionMember_FWDDECL)
#define IL2CPP_STRUCT_ReflectionMember_FWDDECL
#include <Modloader/app/structs/ReflectionMember__Class.h>
#endif
#undef IL2CPP_STRUCT_ReflectionMember_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectionMember_DEFINED) && !defined(IL2CPP_STRUCT_ReflectionMember_FWDDECL)
#include <Modloader/app/structs/ReflectionMember.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReflectionMember.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
