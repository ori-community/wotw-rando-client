#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MantisGrayboxEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MantisGrayboxEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_MantisGrayboxEntity_DEFINED)
#include <Modloader/app/structs/MantisGrayboxEntity__Fields.h>
#if defined(IL2CPP_STRUCT_MantisGrayboxEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_MantisGrayboxEntity_DEFINED
struct MantisGrayboxEntity__Class;
struct MantisGrayboxEntity {
    struct MantisGrayboxEntity__Class* klass;
    MonitorData* monitor;
    struct MantisGrayboxEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MantisGrayboxEntity_FWDDECL)
#define IL2CPP_STRUCT_MantisGrayboxEntity_FWDDECL
#include <Modloader/app/structs/MantisGrayboxEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_MantisGrayboxEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_MantisGrayboxEntity_DEFINED) && !defined(IL2CPP_STRUCT_MantisGrayboxEntity_FWDDECL)
#include <Modloader/app/structs/MantisGrayboxEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MantisGrayboxEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
