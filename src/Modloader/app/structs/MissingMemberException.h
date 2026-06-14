#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MissingMemberException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MissingMemberException_INITIALIZING
#if !defined(IL2CPP_STRUCT_MissingMemberException_DEFINED)
#include <Modloader/app/structs/MissingMemberException__Fields.h>
#if defined(IL2CPP_STRUCT_MissingMemberException__Fields_DEFINED)
#define IL2CPP_STRUCT_MissingMemberException_DEFINED
struct MissingMemberException__Class;
struct MissingMemberException {
    struct MissingMemberException__Class* klass;
    MonitorData* monitor;
    struct MissingMemberException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MissingMemberException_FWDDECL)
#define IL2CPP_STRUCT_MissingMemberException_FWDDECL
#include <Modloader/app/structs/MissingMemberException__Class.h>
#endif
#undef IL2CPP_STRUCT_MissingMemberException_INITIALIZING
#if !defined(IL2CPP_STRUCT_MissingMemberException_DEFINED) && !defined(IL2CPP_STRUCT_MissingMemberException_FWDDECL)
#include <Modloader/app/structs/MissingMemberException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MissingMemberException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
