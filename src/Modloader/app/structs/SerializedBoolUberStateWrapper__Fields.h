#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SerializedBoolUberStateWrapper__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SerializedBoolUberStateWrapper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializedBoolUberStateWrapper__Fields_DEFINED)
#define IL2CPP_STRUCT_SerializedBoolUberStateWrapper__Fields_DEFINED
struct ISerializedUberState;
struct String;
struct __declspec(align(8)) SerializedBoolUberStateWrapper__Fields {
    struct ISerializedUberState* m_state;
    struct String* m_controlName;
    bool _IsActive_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_SerializedBoolUberStateWrapper__Fields_FWDDECL)
#define IL2CPP_STRUCT_SerializedBoolUberStateWrapper__Fields_FWDDECL
#include <Modloader/app/structs/ISerializedUberState.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SerializedBoolUberStateWrapper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializedBoolUberStateWrapper__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SerializedBoolUberStateWrapper__Fields_FWDDECL)
#include <Modloader/app/structs/SerializedBoolUberStateWrapper__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SerializedBoolUberStateWrapper__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
