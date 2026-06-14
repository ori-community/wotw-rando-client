#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ICloneable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ICloneable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICloneable_DEFINED)
#define IL2CPP_STRUCT_ICloneable_DEFINED
struct ICloneable__Class;
struct ICloneable {
    struct ICloneable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ICloneable_FWDDECL)
#define IL2CPP_STRUCT_ICloneable_FWDDECL
#include <Modloader/app/structs/ICloneable__Class.h>
#endif
#undef IL2CPP_STRUCT_ICloneable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICloneable_DEFINED) && !defined(IL2CPP_STRUCT_ICloneable_FWDDECL)
#include <Modloader/app/structs/ICloneable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ICloneable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
