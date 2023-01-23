#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IMessageBox_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IMessageBox_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMessageBox_DEFINED)
#define IL2CPP_STRUCT_IMessageBox_DEFINED
struct IMessageBox__Class;
struct IMessageBox {
    struct IMessageBox__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IMessageBox_FWDDECL)
#define IL2CPP_STRUCT_IMessageBox_FWDDECL
#include <Modloader/app/structs/IMessageBox__Class.h>
#endif
#undef IL2CPP_STRUCT_IMessageBox_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMessageBox_DEFINED) && !defined(IL2CPP_STRUCT_IMessageBox_FWDDECL)
#include <Modloader/app/structs/IMessageBox.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IMessageBox.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
