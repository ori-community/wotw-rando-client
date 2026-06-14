#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IComboMove_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IComboMove_INITIALIZING
#if !defined(IL2CPP_STRUCT_IComboMove_DEFINED)
#define IL2CPP_STRUCT_IComboMove_DEFINED
struct IComboMove__Class;
struct IComboMove {
    struct IComboMove__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IComboMove_FWDDECL)
#define IL2CPP_STRUCT_IComboMove_FWDDECL
#include <Modloader/app/structs/IComboMove__Class.h>
#endif
#undef IL2CPP_STRUCT_IComboMove_INITIALIZING
#if !defined(IL2CPP_STRUCT_IComboMove_DEFINED) && !defined(IL2CPP_STRUCT_IComboMove_FWDDECL)
#include <Modloader/app/structs/IComboMove.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IComboMove.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
