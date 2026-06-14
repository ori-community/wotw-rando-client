#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwitchCase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwitchCase_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwitchCase_DEFINED)
#include <Modloader/app/structs/SwitchCase__Fields.h>
#if defined(IL2CPP_STRUCT_SwitchCase__Fields_DEFINED)
#define IL2CPP_STRUCT_SwitchCase_DEFINED
struct SwitchCase__Class;
struct SwitchCase {
    struct SwitchCase__Class* klass;
    MonitorData* monitor;
    struct SwitchCase__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwitchCase_FWDDECL)
#define IL2CPP_STRUCT_SwitchCase_FWDDECL
#include <Modloader/app/structs/SwitchCase__Class.h>
#endif
#undef IL2CPP_STRUCT_SwitchCase_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwitchCase_DEFINED) && !defined(IL2CPP_STRUCT_SwitchCase_FWDDECL)
#include <Modloader/app/structs/SwitchCase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwitchCase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
