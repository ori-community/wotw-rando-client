#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MemberReference_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MemberReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemberReference_DEFINED)
#include <Modloader/app/structs/MemberReference__Fields.h>
#if defined(IL2CPP_STRUCT_MemberReference__Fields_DEFINED)
#define IL2CPP_STRUCT_MemberReference_DEFINED
struct MemberReference__Class;
struct MemberReference {
    struct MemberReference__Class* klass;
    MonitorData* monitor;
    struct MemberReference__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MemberReference_FWDDECL)
#define IL2CPP_STRUCT_MemberReference_FWDDECL
#include <Modloader/app/structs/MemberReference__Class.h>
#endif
#undef IL2CPP_STRUCT_MemberReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemberReference_DEFINED) && !defined(IL2CPP_STRUCT_MemberReference_FWDDECL)
#include <Modloader/app/structs/MemberReference.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MemberReference.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
