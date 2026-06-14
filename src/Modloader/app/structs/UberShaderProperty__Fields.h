#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderProperty__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderProperty__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderProperty__Fields_DEFINED)
#define IL2CPP_STRUCT_UberShaderProperty__Fields_DEFINED
struct GameObject;
struct UberShaderBlock;
struct String;
struct __declspec(align(8)) UberShaderProperty__Fields {
    struct GameObject* AttachedBlockGameObject;
    struct UberShaderBlock* m_block;
    int32_t MainBindId;
    struct String* _BindName_k__BackingField;
    int32_t _BindID_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_UberShaderProperty__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberShaderProperty__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberShaderBlock.h>
#endif
#undef IL2CPP_STRUCT_UberShaderProperty__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderProperty__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderProperty__Fields_FWDDECL)
#include <Modloader/app/structs/UberShaderProperty__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderProperty__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
