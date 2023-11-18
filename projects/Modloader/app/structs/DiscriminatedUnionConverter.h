#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DiscriminatedUnionConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DiscriminatedUnionConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_DiscriminatedUnionConverter_DEFINED)
#define IL2CPP_STRUCT_DiscriminatedUnionConverter_DEFINED
struct DiscriminatedUnionConverter__Class;
struct DiscriminatedUnionConverter {
    struct DiscriminatedUnionConverter__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DiscriminatedUnionConverter_FWDDECL)
#define IL2CPP_STRUCT_DiscriminatedUnionConverter_FWDDECL
#include <Modloader/app/structs/DiscriminatedUnionConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_DiscriminatedUnionConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_DiscriminatedUnionConverter_DEFINED) && !defined(IL2CPP_STRUCT_DiscriminatedUnionConverter_FWDDECL)
#include <Modloader/app/structs/DiscriminatedUnionConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DiscriminatedUnionConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
