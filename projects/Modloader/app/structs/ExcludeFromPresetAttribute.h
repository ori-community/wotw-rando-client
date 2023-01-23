#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExcludeFromPresetAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExcludeFromPresetAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExcludeFromPresetAttribute_DEFINED)
#define IL2CPP_STRUCT_ExcludeFromPresetAttribute_DEFINED
struct ExcludeFromPresetAttribute__Class;
struct ExcludeFromPresetAttribute {
    struct ExcludeFromPresetAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ExcludeFromPresetAttribute_FWDDECL)
#define IL2CPP_STRUCT_ExcludeFromPresetAttribute_FWDDECL
#include <Modloader/app/structs/ExcludeFromPresetAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_ExcludeFromPresetAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExcludeFromPresetAttribute_DEFINED) && !defined(IL2CPP_STRUCT_ExcludeFromPresetAttribute_FWDDECL)
#include <Modloader/app/structs/ExcludeFromPresetAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExcludeFromPresetAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
