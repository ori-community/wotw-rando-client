#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AutoRotate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AutoRotate_INITIALIZING
#if !defined(IL2CPP_STRUCT_AutoRotate_DEFINED)
#include <Modloader/app/structs/AutoRotate__Fields.h>
#if defined(IL2CPP_STRUCT_AutoRotate__Fields_DEFINED)
#define IL2CPP_STRUCT_AutoRotate_DEFINED
struct AutoRotate__Class;
struct AutoRotate {
    struct AutoRotate__Class* klass;
    MonitorData* monitor;
    struct AutoRotate__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AutoRotate_FWDDECL)
#define IL2CPP_STRUCT_AutoRotate_FWDDECL
#include <Modloader/app/structs/AutoRotate__Class.h>
#endif
#undef IL2CPP_STRUCT_AutoRotate_INITIALIZING
#if !defined(IL2CPP_STRUCT_AutoRotate_DEFINED) && !defined(IL2CPP_STRUCT_AutoRotate_FWDDECL)
#include <Modloader/app/structs/AutoRotate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AutoRotate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
