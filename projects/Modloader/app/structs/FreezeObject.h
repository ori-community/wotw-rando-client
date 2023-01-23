#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FreezeObject_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FreezeObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_FreezeObject_DEFINED)
#include <Modloader/app/structs/FreezeObject__Fields.h>
#if defined(IL2CPP_STRUCT_FreezeObject__Fields_DEFINED)
#define IL2CPP_STRUCT_FreezeObject_DEFINED
struct FreezeObject__Class;
struct FreezeObject {
    struct FreezeObject__Class* klass;
    MonitorData* monitor;
    struct FreezeObject__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FreezeObject_FWDDECL)
#define IL2CPP_STRUCT_FreezeObject_FWDDECL
#include <Modloader/app/structs/FreezeObject__Class.h>
#endif
#undef IL2CPP_STRUCT_FreezeObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_FreezeObject_DEFINED) && !defined(IL2CPP_STRUCT_FreezeObject_FWDDECL)
#include <Modloader/app/structs/FreezeObject.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FreezeObject.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
