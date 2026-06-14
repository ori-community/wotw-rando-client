#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundHostReference__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundHostReference__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundHostReference__Boxed_DEFINED)
#include <Modloader/app/structs/SoundHostReference.h>
#if defined(IL2CPP_STRUCT_SoundHostReference_DEFINED)
#define IL2CPP_STRUCT_SoundHostReference__Boxed_DEFINED
struct SoundHostReference__Class;
struct SoundHostReference__Boxed {
    struct SoundHostReference__Class* klass;
    MonitorData* monitor;
    struct SoundHostReference fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundHostReference__Boxed_FWDDECL)
#define IL2CPP_STRUCT_SoundHostReference__Boxed_FWDDECL
#include <Modloader/app/structs/SoundHostReference__Class.h>
#endif
#undef IL2CPP_STRUCT_SoundHostReference__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundHostReference__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_SoundHostReference__Boxed_FWDDECL)
#include <Modloader/app/structs/SoundHostReference__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundHostReference__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
