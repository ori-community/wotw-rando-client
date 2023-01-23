#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReferenceConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReferenceConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReferenceConverter_DEFINED)
#include <Modloader/app/structs/ReferenceConverter__Fields.h>
#if defined(IL2CPP_STRUCT_ReferenceConverter__Fields_DEFINED)
#define IL2CPP_STRUCT_ReferenceConverter_DEFINED
struct ReferenceConverter__Class;
struct ReferenceConverter {
    struct ReferenceConverter__Class* klass;
    MonitorData* monitor;
    struct ReferenceConverter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReferenceConverter_FWDDECL)
#define IL2CPP_STRUCT_ReferenceConverter_FWDDECL
#include <Modloader/app/structs/ReferenceConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_ReferenceConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReferenceConverter_DEFINED) && !defined(IL2CPP_STRUCT_ReferenceConverter_FWDDECL)
#include <Modloader/app/structs/ReferenceConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReferenceConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
