#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FABRIKChain_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FABRIKChain_INITIALIZING
#if !defined(IL2CPP_STRUCT_FABRIKChain_DEFINED)
#include <Modloader/app/structs/FABRIKChain__Fields.h>
#if defined(IL2CPP_STRUCT_FABRIKChain__Fields_DEFINED)
#define IL2CPP_STRUCT_FABRIKChain_DEFINED
struct FABRIKChain__Class;
struct FABRIKChain {
    struct FABRIKChain__Class* klass;
    MonitorData* monitor;
    struct FABRIKChain__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FABRIKChain_FWDDECL)
#define IL2CPP_STRUCT_FABRIKChain_FWDDECL
#include <Modloader/app/structs/FABRIKChain__Class.h>
#endif
#undef IL2CPP_STRUCT_FABRIKChain_INITIALIZING
#if !defined(IL2CPP_STRUCT_FABRIKChain_DEFINED) && !defined(IL2CPP_STRUCT_FABRIKChain_FWDDECL)
#include <Modloader/app/structs/FABRIKChain.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FABRIKChain.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
