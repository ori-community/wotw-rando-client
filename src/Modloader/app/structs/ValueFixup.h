#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ValueFixup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ValueFixup_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValueFixup_DEFINED)
#include <Modloader/app/structs/ValueFixup__Fields.h>
#if defined(IL2CPP_STRUCT_ValueFixup__Fields_DEFINED)
#define IL2CPP_STRUCT_ValueFixup_DEFINED
struct ValueFixup__Class;
struct ValueFixup {
    struct ValueFixup__Class* klass;
    MonitorData* monitor;
    struct ValueFixup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ValueFixup_FWDDECL)
#define IL2CPP_STRUCT_ValueFixup_FWDDECL
#include <Modloader/app/structs/ValueFixup__Class.h>
#endif
#undef IL2CPP_STRUCT_ValueFixup_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValueFixup_DEFINED) && !defined(IL2CPP_STRUCT_ValueFixup_FWDDECL)
#include <Modloader/app/structs/ValueFixup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ValueFixup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
