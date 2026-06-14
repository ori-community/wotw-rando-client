#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MemberBinding_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MemberBinding_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemberBinding_DEFINED)
#include <Modloader/app/structs/MemberBinding__Fields.h>
#if defined(IL2CPP_STRUCT_MemberBinding__Fields_DEFINED)
#define IL2CPP_STRUCT_MemberBinding_DEFINED
struct MemberBinding__Class;
struct MemberBinding {
    struct MemberBinding__Class* klass;
    MonitorData* monitor;
    struct MemberBinding__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MemberBinding_FWDDECL)
#define IL2CPP_STRUCT_MemberBinding_FWDDECL
#include <Modloader/app/structs/MemberBinding__Class.h>
#endif
#undef IL2CPP_STRUCT_MemberBinding_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemberBinding_DEFINED) && !defined(IL2CPP_STRUCT_MemberBinding_FWDDECL)
#include <Modloader/app/structs/MemberBinding.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MemberBinding.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
