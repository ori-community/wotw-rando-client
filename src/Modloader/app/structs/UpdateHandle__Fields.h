#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpdateHandle__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpdateHandle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateHandle__Fields_DEFINED)
#include <Modloader/app/structs/UpdateType__Enum.h>
#if defined(IL2CPP_STRUCT_UpdateType__Enum_DEFINED)
#define IL2CPP_STRUCT_UpdateHandle__Fields_DEFINED
struct Action_1_Single_;
struct __declspec(align(8)) UpdateHandle__Fields {
    UpdateType__Enum m_updateType;

    int32_t m_order;
    struct Action_1_Single_* m_method;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpdateHandle__Fields_FWDDECL)
#define IL2CPP_STRUCT_UpdateHandle__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Single_.h>
#endif
#undef IL2CPP_STRUCT_UpdateHandle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateHandle__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UpdateHandle__Fields_FWDDECL)
#include <Modloader/app/structs/UpdateHandle__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpdateHandle__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
