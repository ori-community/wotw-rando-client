#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NickGrayboxEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NickGrayboxEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_NickGrayboxEntity_DEFINED)
#include <Modloader/app/structs/NickGrayboxEntity__Fields.h>
#if defined(IL2CPP_STRUCT_NickGrayboxEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_NickGrayboxEntity_DEFINED
struct NickGrayboxEntity__Class;
struct NickGrayboxEntity {
    struct NickGrayboxEntity__Class* klass;
    MonitorData* monitor;
    struct NickGrayboxEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NickGrayboxEntity_FWDDECL)
#define IL2CPP_STRUCT_NickGrayboxEntity_FWDDECL
#include <Modloader/app/structs/NickGrayboxEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_NickGrayboxEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_NickGrayboxEntity_DEFINED) && !defined(IL2CPP_STRUCT_NickGrayboxEntity_FWDDECL)
#include <Modloader/app/structs/NickGrayboxEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NickGrayboxEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
