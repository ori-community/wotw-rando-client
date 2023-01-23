#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeflateInput_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeflateInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeflateInput_DEFINED)
#include <Modloader/app/structs/DeflateInput__Fields.h>
#if defined(IL2CPP_STRUCT_DeflateInput__Fields_DEFINED)
#define IL2CPP_STRUCT_DeflateInput_DEFINED
struct DeflateInput__Class;
struct DeflateInput {
    struct DeflateInput__Class* klass;
    MonitorData* monitor;
    struct DeflateInput__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeflateInput_FWDDECL)
#define IL2CPP_STRUCT_DeflateInput_FWDDECL
#include <Modloader/app/structs/DeflateInput__Class.h>
#endif
#undef IL2CPP_STRUCT_DeflateInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeflateInput_DEFINED) && !defined(IL2CPP_STRUCT_DeflateInput_FWDDECL)
#include <Modloader/app/structs/DeflateInput.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeflateInput.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
