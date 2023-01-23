#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IClippable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IClippable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IClippable_DEFINED)
#define IL2CPP_STRUCT_IClippable_DEFINED
struct IClippable__Class;
struct IClippable {
    struct IClippable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IClippable_FWDDECL)
#define IL2CPP_STRUCT_IClippable_FWDDECL
#include <Modloader/app/structs/IClippable__Class.h>
#endif
#undef IL2CPP_STRUCT_IClippable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IClippable_DEFINED) && !defined(IL2CPP_STRUCT_IClippable_FWDDECL)
#include <Modloader/app/structs/IClippable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IClippable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
