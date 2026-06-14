#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WwiseHooksProcessing_WiseEvent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WwiseHooksProcessing_WiseEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WwiseHooksProcessing_WiseEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_WwiseHooksProcessing_WiseEvent__Fields_DEFINED
struct String;
struct __declspec(align(8)) WwiseHooksProcessing_WiseEvent__Fields {
    uint32_t ID;
    struct String* Name;
};
#endif
#if !defined(IL2CPP_STRUCT_WwiseHooksProcessing_WiseEvent__Fields_FWDDECL)
#define IL2CPP_STRUCT_WwiseHooksProcessing_WiseEvent__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_WwiseHooksProcessing_WiseEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WwiseHooksProcessing_WiseEvent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WwiseHooksProcessing_WiseEvent__Fields_FWDDECL)
#include <Modloader/app/structs/WwiseHooksProcessing_WiseEvent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WwiseHooksProcessing_WiseEvent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
