#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TagModel_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TagModel_INITIALIZING
#if !defined(IL2CPP_STRUCT_TagModel_DEFINED)
#include <Modloader/app/structs/TagModel__Fields.h>
#if defined(IL2CPP_STRUCT_TagModel__Fields_DEFINED)
#define IL2CPP_STRUCT_TagModel_DEFINED
struct TagModel__Class;
struct TagModel {
    struct TagModel__Class* klass;
    MonitorData* monitor;
    struct TagModel__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TagModel_FWDDECL)
#define IL2CPP_STRUCT_TagModel_FWDDECL
#include <Modloader/app/structs/TagModel__Class.h>
#endif
#undef IL2CPP_STRUCT_TagModel_INITIALIZING
#if !defined(IL2CPP_STRUCT_TagModel_DEFINED) && !defined(IL2CPP_STRUCT_TagModel_FWDDECL)
#include <Modloader/app/structs/TagModel.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TagModel.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
