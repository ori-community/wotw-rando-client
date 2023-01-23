#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListView_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListView_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListView_DEFINED)
#include <Modloader/app/structs/ListView__Fields.h>
#if defined(IL2CPP_STRUCT_ListView__Fields_DEFINED)
#define IL2CPP_STRUCT_ListView_DEFINED
struct ListView__Class;
struct ListView {
    struct ListView__Class* klass;
    MonitorData* monitor;
    struct ListView__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ListView_FWDDECL)
#define IL2CPP_STRUCT_ListView_FWDDECL
#include <Modloader/app/structs/ListView__Class.h>
#endif
#undef IL2CPP_STRUCT_ListView_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListView_DEFINED) && !defined(IL2CPP_STRUCT_ListView_FWDDECL)
#include <Modloader/app/structs/ListView.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListView.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
