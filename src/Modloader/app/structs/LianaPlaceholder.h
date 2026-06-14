#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LianaPlaceholder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LianaPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_LianaPlaceholder_DEFINED)
#include <Modloader/app/structs/LianaPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_LianaPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_LianaPlaceholder_DEFINED
struct LianaPlaceholder__Class;
struct LianaPlaceholder {
    struct LianaPlaceholder__Class* klass;
    MonitorData* monitor;
    struct LianaPlaceholder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LianaPlaceholder_FWDDECL)
#define IL2CPP_STRUCT_LianaPlaceholder_FWDDECL
#include <Modloader/app/structs/LianaPlaceholder__Class.h>
#endif
#undef IL2CPP_STRUCT_LianaPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_LianaPlaceholder_DEFINED) && !defined(IL2CPP_STRUCT_LianaPlaceholder_FWDDECL)
#include <Modloader/app/structs/LianaPlaceholder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LianaPlaceholder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
