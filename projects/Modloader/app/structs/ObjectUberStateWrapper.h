#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectUberStateWrapper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectUberStateWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectUberStateWrapper_DEFINED)
#include <Modloader/app/structs/ObjectUberStateWrapper__Fields.h>
#if defined(IL2CPP_STRUCT_ObjectUberStateWrapper__Fields_DEFINED)
#define IL2CPP_STRUCT_ObjectUberStateWrapper_DEFINED
struct ObjectUberStateWrapper__Class;
struct ObjectUberStateWrapper {
    struct ObjectUberStateWrapper__Class* klass;
    MonitorData* monitor;
    struct ObjectUberStateWrapper__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ObjectUberStateWrapper_FWDDECL)
#define IL2CPP_STRUCT_ObjectUberStateWrapper_FWDDECL
#include <Modloader/app/structs/ObjectUberStateWrapper__Class.h>
#endif
#undef IL2CPP_STRUCT_ObjectUberStateWrapper_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectUberStateWrapper_DEFINED) && !defined(IL2CPP_STRUCT_ObjectUberStateWrapper_FWDDECL)
#include <Modloader/app/structs/ObjectUberStateWrapper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectUberStateWrapper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
