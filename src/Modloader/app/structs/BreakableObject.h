#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BreakableObject_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BreakableObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_BreakableObject_DEFINED)
#include <Modloader/app/structs/BreakableObject__Fields.h>
#if defined(IL2CPP_STRUCT_BreakableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_BreakableObject_DEFINED
struct BreakableObject__Class;
struct BreakableObject {
    struct BreakableObject__Class* klass;
    MonitorData* monitor;
    struct BreakableObject__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BreakableObject_FWDDECL)
#define IL2CPP_STRUCT_BreakableObject_FWDDECL
#include <Modloader/app/structs/BreakableObject__Class.h>
#endif
#undef IL2CPP_STRUCT_BreakableObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_BreakableObject_DEFINED) && !defined(IL2CPP_STRUCT_BreakableObject_FWDDECL)
#include <Modloader/app/structs/BreakableObject.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BreakableObject.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
