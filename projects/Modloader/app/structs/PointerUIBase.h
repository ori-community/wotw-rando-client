#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PointerUIBase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PointerUIBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointerUIBase_DEFINED)
#include <Modloader/app/structs/PointerUIBase__Fields.h>
#if defined(IL2CPP_STRUCT_PointerUIBase__Fields_DEFINED)
#define IL2CPP_STRUCT_PointerUIBase_DEFINED
struct PointerUIBase__Class;
struct PointerUIBase {
    struct PointerUIBase__Class* klass;
    MonitorData* monitor;
    struct PointerUIBase__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PointerUIBase_FWDDECL)
#define IL2CPP_STRUCT_PointerUIBase_FWDDECL
#include <Modloader/app/structs/PointerUIBase__Class.h>
#endif
#undef IL2CPP_STRUCT_PointerUIBase_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointerUIBase_DEFINED) && !defined(IL2CPP_STRUCT_PointerUIBase_FWDDECL)
#include <Modloader/app/structs/PointerUIBase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PointerUIBase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
