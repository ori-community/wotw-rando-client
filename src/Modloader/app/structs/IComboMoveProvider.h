#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IComboMoveProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IComboMoveProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IComboMoveProvider_DEFINED)
#define IL2CPP_STRUCT_IComboMoveProvider_DEFINED
struct IComboMoveProvider__Class;
struct IComboMoveProvider {
    struct IComboMoveProvider__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IComboMoveProvider_FWDDECL)
#define IL2CPP_STRUCT_IComboMoveProvider_FWDDECL
#include <Modloader/app/structs/IComboMoveProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_IComboMoveProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IComboMoveProvider_DEFINED) && !defined(IL2CPP_STRUCT_IComboMoveProvider_FWDDECL)
#include <Modloader/app/structs/IComboMoveProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IComboMoveProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
