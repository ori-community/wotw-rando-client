#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkPositionArray__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkPositionArray__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkPositionArray__Fields_DEFINED)
#define IL2CPP_STRUCT_AkPositionArray__Fields_DEFINED
struct __declspec(align(8)) AkPositionArray__Fields {
    void* m_Buffer;
    void* m_Current;
    uint32_t m_MaxCount;
    uint32_t _Count_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_AkPositionArray__Fields_FWDDECL)
#define IL2CPP_STRUCT_AkPositionArray__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_AkPositionArray__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkPositionArray__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AkPositionArray__Fields_FWDDECL)
#include <Modloader/app/structs/AkPositionArray__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkPositionArray__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
