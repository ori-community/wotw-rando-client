#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PointerInputModule_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PointerInputModule_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointerInputModule_DEFINED)
#include <Modloader/app/structs/PointerInputModule__Fields.h>
#if defined(IL2CPP_STRUCT_PointerInputModule__Fields_DEFINED)
#define IL2CPP_STRUCT_PointerInputModule_DEFINED
struct PointerInputModule__Class;
struct PointerInputModule {
    struct PointerInputModule__Class* klass;
    MonitorData* monitor;
    struct PointerInputModule__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PointerInputModule_FWDDECL)
#define IL2CPP_STRUCT_PointerInputModule_FWDDECL
#include <Modloader/app/structs/PointerInputModule__Class.h>
#endif
#undef IL2CPP_STRUCT_PointerInputModule_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointerInputModule_DEFINED) && !defined(IL2CPP_STRUCT_PointerInputModule_FWDDECL)
#include <Modloader/app/structs/PointerInputModule.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PointerInputModule.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
