#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SequencePlatform_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SequencePlatform_INITIALIZING
#if !defined(IL2CPP_STRUCT_SequencePlatform_DEFINED)
#include <Modloader/app/structs/SequencePlatform__Fields.h>
#if defined(IL2CPP_STRUCT_SequencePlatform__Fields_DEFINED)
#define IL2CPP_STRUCT_SequencePlatform_DEFINED
struct SequencePlatform__Class;
struct SequencePlatform {
    struct SequencePlatform__Class* klass;
    MonitorData* monitor;
    struct SequencePlatform__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SequencePlatform_FWDDECL)
#define IL2CPP_STRUCT_SequencePlatform_FWDDECL
#include <Modloader/app/structs/SequencePlatform__Class.h>
#endif
#undef IL2CPP_STRUCT_SequencePlatform_INITIALIZING
#if !defined(IL2CPP_STRUCT_SequencePlatform_DEFINED) && !defined(IL2CPP_STRUCT_SequencePlatform_FWDDECL)
#include <Modloader/app/structs/SequencePlatform.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SequencePlatform.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
