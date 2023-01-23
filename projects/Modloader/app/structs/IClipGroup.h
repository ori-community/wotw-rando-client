#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IClipGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IClipGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_IClipGroup_DEFINED)
#define IL2CPP_STRUCT_IClipGroup_DEFINED
struct IClipGroup__Class;
struct IClipGroup {
    struct IClipGroup__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IClipGroup_FWDDECL)
#define IL2CPP_STRUCT_IClipGroup_FWDDECL
#include <Modloader/app/structs/IClipGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_IClipGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_IClipGroup_DEFINED) && !defined(IL2CPP_STRUCT_IClipGroup_FWDDECL)
#include <Modloader/app/structs/IClipGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IClipGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
