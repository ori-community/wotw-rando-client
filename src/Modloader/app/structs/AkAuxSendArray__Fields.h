#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkAuxSendArray__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkAuxSendArray__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkAuxSendArray__Fields_DEFINED)
#define IL2CPP_STRUCT_AkAuxSendArray__Fields_DEFINED
struct Action_1_Int32_;
struct __declspec(align(8)) AkAuxSendArray__Fields {
    int32_t SIZE_OF_AKAUXSENDVALUE;
    void* m_Buffer;
    int32_t m_Count;
    struct Action_1_Int32_* OnCountChanged;
};
#endif
#if !defined(IL2CPP_STRUCT_AkAuxSendArray__Fields_FWDDECL)
#define IL2CPP_STRUCT_AkAuxSendArray__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Int32_.h>
#endif
#undef IL2CPP_STRUCT_AkAuxSendArray__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkAuxSendArray__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AkAuxSendArray__Fields_FWDDECL)
#include <Modloader/app/structs/AkAuxSendArray__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkAuxSendArray__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
