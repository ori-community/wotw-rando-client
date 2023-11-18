#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CompressedLightDirectionMap_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CompressedLightDirectionMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompressedLightDirectionMap_DEFINED)
#include <Modloader/app/structs/CompressedLightDirectionMap__Fields.h>
#if defined(IL2CPP_STRUCT_CompressedLightDirectionMap__Fields_DEFINED)
#define IL2CPP_STRUCT_CompressedLightDirectionMap_DEFINED
struct CompressedLightDirectionMap__Class;
struct CompressedLightDirectionMap {
    struct CompressedLightDirectionMap__Class* klass;
    MonitorData* monitor;
    struct CompressedLightDirectionMap__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CompressedLightDirectionMap_FWDDECL)
#define IL2CPP_STRUCT_CompressedLightDirectionMap_FWDDECL
#include <Modloader/app/structs/CompressedLightDirectionMap__Class.h>
#endif
#undef IL2CPP_STRUCT_CompressedLightDirectionMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompressedLightDirectionMap_DEFINED) && !defined(IL2CPP_STRUCT_CompressedLightDirectionMap_FWDDECL)
#include <Modloader/app/structs/CompressedLightDirectionMap.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CompressedLightDirectionMap.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
