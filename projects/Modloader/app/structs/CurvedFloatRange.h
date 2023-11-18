#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CurvedFloatRange_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CurvedFloatRange_INITIALIZING
#if !defined(IL2CPP_STRUCT_CurvedFloatRange_DEFINED)
#include <Modloader/app/structs/CurvedFloatRange__Fields.h>
#if defined(IL2CPP_STRUCT_CurvedFloatRange__Fields_DEFINED)
#define IL2CPP_STRUCT_CurvedFloatRange_DEFINED
struct CurvedFloatRange__Class;
struct CurvedFloatRange {
    struct CurvedFloatRange__Class* klass;
    MonitorData* monitor;
    struct CurvedFloatRange__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CurvedFloatRange_FWDDECL)
#define IL2CPP_STRUCT_CurvedFloatRange_FWDDECL
#include <Modloader/app/structs/CurvedFloatRange__Class.h>
#endif
#undef IL2CPP_STRUCT_CurvedFloatRange_INITIALIZING
#if !defined(IL2CPP_STRUCT_CurvedFloatRange_DEFINED) && !defined(IL2CPP_STRUCT_CurvedFloatRange_FWDDECL)
#include <Modloader/app/structs/CurvedFloatRange.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CurvedFloatRange.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
