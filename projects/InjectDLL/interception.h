#pragma once

#include <string>

struct intercept {
    intercept(__int64 o, PVOID* oP, PVOID iP, std::string s);

    int type;
    std::string name;
    __int64 offset;
    void** original_pointer;
    void* intercept_pointer;
    intercept* next;
    intercept* prev;
};

extern intercept* last_intercept;

__int64 resolve_rva(__int64 rva);
void interception_init();
void interception_detach();

namespace il2
{
    bool instance_of(Il2CppClass* klass, Il2CppClass* parent);
    int implements_interface(Il2CppClass* klass, Il2CppClass* iklass);

    template<typename TObject>
    TObject* safe_il2_cast(Il2CppClass* klass, Il2CppObject* obj)
    {
        if (!instance_of(obj->klass, klass))
            return nullptr;

        return reinterpret_cast<TObject*>(obj);
    }

    template<typename TObject>
    TObject* unsafe_il2_cast(void* klass, void* obj)
    {
        return safe_il2_cast<TObject>(reinterpret_cast<Il2CppClass*>(klass), reinterpret_cast<Il2CppObject*>(obj));
    }
}
