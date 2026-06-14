#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ImmutableCollectionsUtils_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ImmutableCollectionsUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_ImmutableCollectionsUtils_DEFINED)
#define IL2CPP_STRUCT_ImmutableCollectionsUtils_DEFINED
struct ImmutableCollectionsUtils__Class;
struct ImmutableCollectionsUtils {
    struct ImmutableCollectionsUtils__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ImmutableCollectionsUtils_FWDDECL)
#define IL2CPP_STRUCT_ImmutableCollectionsUtils_FWDDECL
#include <Modloader/app/structs/ImmutableCollectionsUtils__Class.h>
#endif
#undef IL2CPP_STRUCT_ImmutableCollectionsUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_ImmutableCollectionsUtils_DEFINED) && !defined(IL2CPP_STRUCT_ImmutableCollectionsUtils_FWDDECL)
#include <Modloader/app/structs/ImmutableCollectionsUtils.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ImmutableCollectionsUtils.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
