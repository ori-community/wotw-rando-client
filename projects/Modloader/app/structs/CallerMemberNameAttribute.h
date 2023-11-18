#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CallerMemberNameAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CallerMemberNameAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallerMemberNameAttribute_DEFINED)
#define IL2CPP_STRUCT_CallerMemberNameAttribute_DEFINED
struct CallerMemberNameAttribute__Class;
struct CallerMemberNameAttribute {
    struct CallerMemberNameAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CallerMemberNameAttribute_FWDDECL)
#define IL2CPP_STRUCT_CallerMemberNameAttribute_FWDDECL
#include <Modloader/app/structs/CallerMemberNameAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_CallerMemberNameAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_CallerMemberNameAttribute_DEFINED) && !defined(IL2CPP_STRUCT_CallerMemberNameAttribute_FWDDECL)
#include <Modloader/app/structs/CallerMemberNameAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CallerMemberNameAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
