#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AttackAcceptInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AttackAcceptInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttackAcceptInfo_DEFINED)
#include <Modloader/app/structs/AttackAcceptInfo__Fields.h>
#if defined(IL2CPP_STRUCT_AttackAcceptInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_AttackAcceptInfo_DEFINED
struct AttackAcceptInfo__Class;
struct AttackAcceptInfo {
    struct AttackAcceptInfo__Class* klass;
    MonitorData* monitor;
    struct AttackAcceptInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AttackAcceptInfo_FWDDECL)
#define IL2CPP_STRUCT_AttackAcceptInfo_FWDDECL
#include <Modloader/app/structs/AttackAcceptInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_AttackAcceptInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttackAcceptInfo_DEFINED) && !defined(IL2CPP_STRUCT_AttackAcceptInfo_FWDDECL)
#include <Modloader/app/structs/AttackAcceptInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AttackAcceptInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
