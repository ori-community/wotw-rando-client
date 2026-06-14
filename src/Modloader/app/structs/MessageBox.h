#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MessageBox_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MessageBox_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageBox_DEFINED)
#include <Modloader/app/structs/MessageBox__Fields.h>
#if defined(IL2CPP_STRUCT_MessageBox__Fields_DEFINED)
#define IL2CPP_STRUCT_MessageBox_DEFINED
struct MessageBox__Class;
struct MessageBox {
    struct MessageBox__Class* klass;
    MonitorData* monitor;
    struct MessageBox__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MessageBox_FWDDECL)
#define IL2CPP_STRUCT_MessageBox_FWDDECL
#include <Modloader/app/structs/MessageBox__Class.h>
#endif
#undef IL2CPP_STRUCT_MessageBox_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageBox_DEFINED) && !defined(IL2CPP_STRUCT_MessageBox_FWDDECL)
#include <Modloader/app/structs/MessageBox.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MessageBox.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
