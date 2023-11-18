#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NonSerializedBooleanUberStateWrapper__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NonSerializedBooleanUberStateWrapper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NonSerializedBooleanUberStateWrapper__Fields_DEFINED)
#define IL2CPP_STRUCT_NonSerializedBooleanUberStateWrapper__Fields_DEFINED
struct BooleanUberState;
struct String;
struct __declspec(align(8)) NonSerializedBooleanUberStateWrapper__Fields {
    struct BooleanUberState* m_state;
    struct String* m_controlName;
    bool _IsActive_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_NonSerializedBooleanUberStateWrapper__Fields_FWDDECL)
#define IL2CPP_STRUCT_NonSerializedBooleanUberStateWrapper__Fields_FWDDECL
#include <Modloader/app/structs/BooleanUberState.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_NonSerializedBooleanUberStateWrapper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NonSerializedBooleanUberStateWrapper__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NonSerializedBooleanUberStateWrapper__Fields_FWDDECL)
#include <Modloader/app/structs/NonSerializedBooleanUberStateWrapper__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NonSerializedBooleanUberStateWrapper__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
