#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MemberFilter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MemberFilter_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemberFilter_DEFINED)
#include <Modloader/app/structs/MemberFilter__Fields.h>
#if defined(IL2CPP_STRUCT_MemberFilter__Fields_DEFINED)
#define IL2CPP_STRUCT_MemberFilter_DEFINED
struct MemberFilter__Class;
struct MemberFilter {
    struct MemberFilter__Class* klass;
    MonitorData* monitor;
    struct MemberFilter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MemberFilter_FWDDECL)
#define IL2CPP_STRUCT_MemberFilter_FWDDECL
#include <Modloader/app/structs/MemberFilter__Class.h>
#endif
#undef IL2CPP_STRUCT_MemberFilter_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemberFilter_DEFINED) && !defined(IL2CPP_STRUCT_MemberFilter_FWDDECL)
#include <Modloader/app/structs/MemberFilter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MemberFilter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
