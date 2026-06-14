#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaseAnimatorSerializer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaseAnimatorSerializer_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseAnimatorSerializer_DEFINED)
#include <Modloader/app/structs/BaseAnimatorSerializer__Fields.h>
#if defined(IL2CPP_STRUCT_BaseAnimatorSerializer__Fields_DEFINED)
#define IL2CPP_STRUCT_BaseAnimatorSerializer_DEFINED
struct BaseAnimatorSerializer__Class;
struct BaseAnimatorSerializer {
    struct BaseAnimatorSerializer__Class* klass;
    MonitorData* monitor;
    struct BaseAnimatorSerializer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BaseAnimatorSerializer_FWDDECL)
#define IL2CPP_STRUCT_BaseAnimatorSerializer_FWDDECL
#include <Modloader/app/structs/BaseAnimatorSerializer__Class.h>
#endif
#undef IL2CPP_STRUCT_BaseAnimatorSerializer_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseAnimatorSerializer_DEFINED) && !defined(IL2CPP_STRUCT_BaseAnimatorSerializer_FWDDECL)
#include <Modloader/app/structs/BaseAnimatorSerializer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaseAnimatorSerializer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
