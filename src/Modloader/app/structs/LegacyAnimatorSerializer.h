#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyAnimatorSerializer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyAnimatorSerializer_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyAnimatorSerializer_DEFINED)
#include <Modloader/app/structs/LegacyAnimatorSerializer__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyAnimatorSerializer__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacyAnimatorSerializer_DEFINED
struct LegacyAnimatorSerializer__Class;
struct LegacyAnimatorSerializer {
    struct LegacyAnimatorSerializer__Class* klass;
    MonitorData* monitor;
    struct LegacyAnimatorSerializer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyAnimatorSerializer_FWDDECL)
#define IL2CPP_STRUCT_LegacyAnimatorSerializer_FWDDECL
#include <Modloader/app/structs/LegacyAnimatorSerializer__Class.h>
#endif
#undef IL2CPP_STRUCT_LegacyAnimatorSerializer_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyAnimatorSerializer_DEFINED) && !defined(IL2CPP_STRUCT_LegacyAnimatorSerializer_FWDDECL)
#include <Modloader/app/structs/LegacyAnimatorSerializer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyAnimatorSerializer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
