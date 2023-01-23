#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ComboMove_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ComboMove_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComboMove_DEFINED)
#include <Modloader/app/structs/ComboMove__Fields.h>
#if defined(IL2CPP_STRUCT_ComboMove__Fields_DEFINED)
#define IL2CPP_STRUCT_ComboMove_DEFINED
struct ComboMove__Class;
struct ComboMove {
    struct ComboMove__Class* klass;
    MonitorData* monitor;
    struct ComboMove__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ComboMove_FWDDECL)
#define IL2CPP_STRUCT_ComboMove_FWDDECL
#include <Modloader/app/structs/ComboMove__Class.h>
#endif
#undef IL2CPP_STRUCT_ComboMove_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComboMove_DEFINED) && !defined(IL2CPP_STRUCT_ComboMove_FWDDECL)
#include <Modloader/app/structs/ComboMove.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ComboMove.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
