#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NPCMessageBox_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NPCMessageBox_INITIALIZING
#if !defined(IL2CPP_STRUCT_NPCMessageBox_DEFINED)
#include <Modloader/app/structs/NPCMessageBox__Fields.h>
#if defined(IL2CPP_STRUCT_NPCMessageBox__Fields_DEFINED)
#define IL2CPP_STRUCT_NPCMessageBox_DEFINED
struct NPCMessageBox__Class;
struct NPCMessageBox {
    struct NPCMessageBox__Class* klass;
    MonitorData* monitor;
    struct NPCMessageBox__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NPCMessageBox_FWDDECL)
#define IL2CPP_STRUCT_NPCMessageBox_FWDDECL
#include <Modloader/app/structs/NPCMessageBox__Class.h>
#endif
#undef IL2CPP_STRUCT_NPCMessageBox_INITIALIZING
#if !defined(IL2CPP_STRUCT_NPCMessageBox_DEFINED) && !defined(IL2CPP_STRUCT_NPCMessageBox_FWDDECL)
#include <Modloader/app/structs/NPCMessageBox.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NPCMessageBox.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
