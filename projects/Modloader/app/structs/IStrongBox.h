#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IStrongBox_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IStrongBox_INITIALIZING
#if !defined(IL2CPP_STRUCT_IStrongBox_DEFINED)
#define IL2CPP_STRUCT_IStrongBox_DEFINED
struct IStrongBox__Class;
struct IStrongBox {
    struct IStrongBox__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IStrongBox_FWDDECL)
#define IL2CPP_STRUCT_IStrongBox_FWDDECL
#include <Modloader/app/structs/IStrongBox__Class.h>
#endif
#undef IL2CPP_STRUCT_IStrongBox_INITIALIZING
#if !defined(IL2CPP_STRUCT_IStrongBox_DEFINED) && !defined(IL2CPP_STRUCT_IStrongBox_FWDDECL)
#include <Modloader/app/structs/IStrongBox.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IStrongBox.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
