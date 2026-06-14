#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Rectangle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Rectangle_INITIALIZING
#if !defined(IL2CPP_STRUCT_Rectangle_DEFINED)
#include <Modloader/app/structs/Rectangle__Fields.h>
#if defined(IL2CPP_STRUCT_Rectangle__Fields_DEFINED)
#define IL2CPP_STRUCT_Rectangle_DEFINED
struct Rectangle__Class;
struct Rectangle {
    struct Rectangle__Class* klass;
    MonitorData* monitor;
    struct Rectangle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Rectangle_FWDDECL)
#define IL2CPP_STRUCT_Rectangle_FWDDECL
#include <Modloader/app/structs/Rectangle__Class.h>
#endif
#undef IL2CPP_STRUCT_Rectangle_INITIALIZING
#if !defined(IL2CPP_STRUCT_Rectangle_DEFINED) && !defined(IL2CPP_STRUCT_Rectangle_FWDDECL)
#include <Modloader/app/structs/Rectangle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Rectangle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
