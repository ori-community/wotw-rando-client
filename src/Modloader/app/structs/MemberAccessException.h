#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MemberAccessException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MemberAccessException_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemberAccessException_DEFINED)
#include <Modloader/app/structs/MemberAccessException__Fields.h>
#if defined(IL2CPP_STRUCT_MemberAccessException__Fields_DEFINED)
#define IL2CPP_STRUCT_MemberAccessException_DEFINED
struct MemberAccessException__Class;
struct MemberAccessException {
    struct MemberAccessException__Class* klass;
    MonitorData* monitor;
    struct MemberAccessException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MemberAccessException_FWDDECL)
#define IL2CPP_STRUCT_MemberAccessException_FWDDECL
#include <Modloader/app/structs/MemberAccessException__Class.h>
#endif
#undef IL2CPP_STRUCT_MemberAccessException_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemberAccessException_DEFINED) && !defined(IL2CPP_STRUCT_MemberAccessException_FWDDECL)
#include <Modloader/app/structs/MemberAccessException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MemberAccessException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
